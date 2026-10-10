# Referencias nativas para contenido combinado

Componente host aislado. Monta y verifica DW3 y XL juntos, conserva la edición de
cada recurso y reconstruye sus referencias después de reiniciar. No interpreta
MixJoy ni modifica progreso, personajes, dificultad o desbloqueos.

`CombinedSession` publica un montaje solo después de validar las dos ediciones.
Los handles conservan un token de ese montaje. El éxito de un remount invalida
los anteriores; el fracaso conserva el estado previo. Un handle de otra sesión
se rechaza incluso si sus LSN y contador coinciden. Los sectores sintéticos no
se guardan: la persistencia usa edición + RID o ruta + hash del archivo.

El perfil `DW3PCREF`, esquema 1, contiene revisión, identidad del resolver y de
ambos releases, referencias acotadas y SHA-256. Los archivos auxiliares usados
por referencias tienen hashes propios. El guardado exige un directorio separado
de los originales, bloqueo exclusivo entre escritores, revisión esperada,
temporal único creado con `CREATE_NEW`, flush y reemplazo. Un fallo conserva el
perfil previo y limpia únicamente su propio temporal. No promete tolerancia a
un adversario que modifique el directorio durante una operación ni a todo tipo
de fallo físico del almacenamiento.

```powershell
cmake -S research/combined_session -B <build> -G "Visual Studio 17 2022" -A x64
cmake --build <build> --config Release
ctest --test-dir <build> -C Release --output-on-failure
```

`HOST_SOURCE` permite usar otra copia del host. La compilación reutiliza solo
VFS, ELF, formatos y procedencia, sin enlazar runtime PS2 ni cuerpos guest.
El contrato crea entradas sintéticas y prueba identidad Base/XL, cold restore,
consultas inversas, handles extranjeros/obsoletos, remount fallido, ausencia de
fallback, rutas que escapan, conflicto de revisión, corrupción, reemplazo
bloqueado, archivo modificado y rechazo de guardados dentro de los originales.
Los fixtures se conservan; usar una carpeta nueva en cada ejecución.
CTest crea una carpeta única por prueba y corrida, por lo que se puede repetir.
Los handles sellan también su extent: cambiar LSN, tamaño, edición o ruta, o
fabricar un handle copiando sus campos públicos, se rechaza antes de leer.
Las cinco pruebas negativas fallaron con la implementación anterior y pasan
tras esta corrección. El sello no reemplaza las restricciones del sistema de
archivos ni protege contra modificar el archivo subyacente entre operaciones.

Falta compartir este resolver entre VFS HLE y CDVD/IOP, definir el estado de
juego con evidencia y verificar su ejecución. No constituye un juego unificado
jugable. La identidad del archivo principal se verifica al montar y su tamaño
y fecha al leer; no se revalida su hash completo en cada lectura de recursos.
