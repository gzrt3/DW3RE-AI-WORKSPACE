# Storage and final product location

The user's final product directory is **C:/Games/DW**, on the NVMe drive.
It is reserved for DW3_Remastered.exe and its installed data, mods, settings,
saves and logs. It currently contains a location marker and empty directories,
not a playable release. Do not rename an incomplete boot diagnostic to imply
that the final product has been delivered.

| Role | Current local path |
| --- | --- |
| Active source checkout | D:/DW3-GitHub-Publish-20261004 |
| Public source repository | https://github.com/gzrt3/DW3RE-AI-WORKSPACE |
| Native intermediate builds | D:/DW3-Publication-Build |
| Final installed product | C:/Games/DW |
| Required backup root | D:/Backup/DWProject |
| Preserved former development tree | C:/Fate Soldiers 3 |
| Original references and inputs | C:/DW3 |
| Extracted combined data targets | D:/DW3-native-data/combined-20261004 |
| Historical external evidence | D:/DW3-evidence-archive |

GitHub carries code and compact public evidence. It does not replace local
original assets, dumps, private provider ledgers, saves or a working build.
The D checkout intentionally has portable/public configuration. Do not overwrite
it wholesale with the C tree. The broad signed-branch emitter edit in C remains
unvalidated and is not part of the published source.

The migration backup at D:/Backup/DWProject/migration-20261005 copies regular
files from both C trees and verifies source and destination SHA256 values.
Its final backup-verification.json must say VERIFIED before treating it as a
verified backup. A running copy is not enough. Junction targets are recorded,
not copied, and must remain available. public-before.bundle preserves Git refs.
No C cleanup is authorized by a partial verification or a successful Git push.

Before removing a redundant local path, finish verification, preserve unique
files and private state, validate the D build/probe, and retarget every consumer.
Until then the C trees remain preserved. Run new development in D; do not modify
the source trees of an active backup or launch overlapping builds.

The final package should place its real assets under C:/Games/DW/data, not depend
on a junction back to the development tree. Install only reproducible reviewed
outputs, retain prior versions, and never overwrite personal saves or mods during
an update. Final standalone, gameplay, modding and clean-install verification
remain required; reserving this directory closes no acceptance gate.
