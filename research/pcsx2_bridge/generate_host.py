"""Generate a GPL Host shim from the pinned, public GSRunner source."""
import argparse
import subprocess
from pathlib import Path

parser = argparse.ArgumentParser()
parser.add_argument('source', type=Path)
parser.add_argument('output', type=Path)
args = parser.parse_args()
pin = 'fd9d310ccbb6b8b62c976da8886a3c8fd3a10ff3'
revision = subprocess.check_output(['git', '-C', str(args.source), 'rev-parse', 'HEAD'], text=True).strip()
if revision != pin:
    raise SystemExit('PCSX2 source revision mismatch')
data = subprocess.check_output(['git', '-C', str(args.source), 'show',
    pin + ':pcsx2-gsrunner/Main.cpp'], text=True, encoding='utf-8')
data = data.replace('static MemorySettingsInterface s_settings_interface;',
                    'static MemorySettingsInterface s_settings_interface;\nstatic std::vector<u8> bridge_font;\nstatic std::atomic<bool> dw3_shutdown_requested{false};')
def replace_body(source, signature, replacement):
    start = source.index(signature)
    opening = source.index('{', start)
    depth = 1
    end = opening + 1
    while depth:
        if source[end] == '{': depth += 1
        elif source[end] == '}': depth -= 1
        end += 1
    return source[:start] + replacement + source[end:]
start = data.index('bool GSRunner::InitializeConfig()')
end = data.index('\nvoid Host::CommitBaseSettingChanges()', start)
data = data[:start] + '''bool GSRunner::InitializeConfig()
{
    EmuFolders::SetDefaults(s_settings_interface);
    EmuFolders::LoadConfig(s_settings_interface);
    Host::Internal::SetBaseSettingsLayer(&s_settings_interface);
    const auto font = FileSystem::MapBinaryFileForRead(
        Path::Combine(EmuFolders::Resources, "fonts/Roboto-Regular.ttf").c_str());
    if (font.empty()) return false;
    bridge_font.assign(font.begin(), font.end());
    FileSystem::UnmapFile(font);
    std::vector<ImGuiManager::FontInfo> fonts;
    ImGuiManager::FontInfo fi{};
    fi.data = bridge_font;
    fonts.push_back(fi);
    ImGuiManager::SetFonts(std::move(fonts));
    return true;
}
''' + data[end:]
start = data.index('#ifdef _WIN32\n// We can\'t handle unicode')
end = data.index('\nvoid Host::PumpMessagesOnCPUThread()', start)
data = data[:start] + data[end:]
data = replace_body(data, 'int wmain(', '')
data = replace_body(data, 'void Host::PumpMessagesOnCPUThread()',
                    'void Host::PumpMessagesOnCPUThread() {}')
data = replace_body(data, 'void Host::RunOnCPUThread(',
                    'void Host::RunOnCPUThread(std::function<void()> function, bool block) { throw std::runtime_error("Unexpected CPU dispatch in GS bridge"); }')
data = replace_body(data, 'void Host::RequestVMShutdown(',
                    'void Host::RequestVMShutdown(bool a, bool b, bool c) { GSRunner::StopPlatformMessagePump(); }')
data = replace_body(data, 'void Host::BeginPresentFrame()',
                    'void Host::BeginPresentFrame() {}')
data = replace_body(data, 'void GSRunner::StopPlatformMessagePump()',
                    'void GSRunner::StopPlatformMessagePump() { dw3_shutdown_requested.store(true); }')
data = data.replace('GetWindowRect(s_hwnd, &rc)', 'GetClientRect(s_hwnd, &rc)')
data = data.replace('L"PCSX2GSRunner"', 'L"DW3NativeGSBridge"').replace('L"PCSX2 GS Runner"', 'L"DW3 GS Hardware Reference"')
data = data.replace('wc.hInstance = GetModuleHandle(nullptr);', '''GetModuleHandleExW(GET_MODULE_HANDLE_EX_FLAG_FROM_ADDRESS | GET_MODULE_HANDLE_EX_FLAG_UNCHANGED_REFCOUNT,
        reinterpret_cast<LPCWSTR>(&WndProc), &wc.hInstance);''')
data = replace_body(data, 'bool GSRunner::CreatePlatformWindow()', '''bool GSRunner::CreatePlatformWindow()
{
    WNDCLASSEXW wc{};
    wc.cbSize = sizeof(wc); wc.lpfnWndProc = WndProc;
    wc.lpszClassName = WINDOW_CLASS_NAME;
    wc.hCursor = LoadCursor(nullptr, IDC_ARROW);
    if (!GetModuleHandleExW(GET_MODULE_HANDLE_EX_FLAG_FROM_ADDRESS | GET_MODULE_HANDLE_EX_FLAG_UNCHANGED_REFCOUNT,
        reinterpret_cast<LPCWSTR>(&WndProc), &wc.hInstance)) return false;
    if (!RegisterClassExW(&wc) && GetLastError() != ERROR_CLASS_ALREADY_EXISTS) return false;
    RECT size{0,0,640,480};
    const DWORD style = WS_OVERLAPPEDWINDOW;
    AdjustWindowRectEx(&size,style,false,0);
    s_hwnd = CreateWindowExW(0, WINDOW_CLASS_NAME, L"DW3 GS Hardware Reference", style,
        CW_USEDEFAULT,CW_USEDEFAULT,size.right-size.left,size.bottom-size.top,
        nullptr,nullptr,wc.hInstance,nullptr);
    if (!s_hwnd) return false;
    ShowWindow(s_hwnd, SW_SHOW);
    PumpPlatformMessages(false);
    return true;
}''')
data = replace_body(data, 'void GSRunner::DestroyPlatformWindow()', '''void GSRunner::DestroyPlatformWindow()
{
    if (s_hwnd) { DestroyWindow(s_hwnd); s_hwnd = nullptr; }
    HMODULE owner{};
    if (GetModuleHandleExW(GET_MODULE_HANDLE_EX_FLAG_FROM_ADDRESS | GET_MODULE_HANDLE_EX_FLAG_UNCHANGED_REFCOUNT,
        reinterpret_cast<LPCWSTR>(&WndProc), &owner)) UnregisterClassW(WINDOW_CLASS_NAME, owner);
}''')
data = replace_body(data, 'LRESULT CALLBACK WndProc(HWND hwnd, UINT msg, WPARAM wParam, LPARAM lParam)\n{', '''LRESULT CALLBACK WndProc(HWND hwnd, UINT msg, WPARAM wParam, LPARAM lParam)
{
    if (msg == WM_CLOSE) { GSRunner::StopPlatformMessagePump(); return 0; }
    return DefWindowProcW(hwnd, msg, wParam, lParam);
}''')
data = data.replace('if (!RegisterClassExW(&wc))',
                    'if (!RegisterClassExW(&wc) && GetLastError() != ERROR_CLASS_ALREADY_EXISTS)')
# The upstream entry point and CPU thread are absent from this generated unit.
if any(token in data for token in ('VMManager::Execute()', 'CPUThreadInitialize()', 'real_main(', 'int wmain(', 'MTGS::RunOnGSThread(')):
    raise SystemExit('CPU execution path remains in shim')
data += '\n#include "bridge_impl.inc"\n'
args.output.parent.mkdir(parents=True, exist_ok=True)
args.output.write_text(data, encoding='utf-8')
print('generated_public_host_shim=PASS cpu_thread_entrypoints=0')
