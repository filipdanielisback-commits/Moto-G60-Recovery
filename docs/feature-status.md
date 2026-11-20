# Feature status

All entries below are planned unless explicitly marked otherwise. The repository currently contains no functional recovery backend.

| Feature | Status | Notes |
| --- | --- | --- |
| Touchscreen-first UI | Planned | Must be implemented using the selected TWRP UI/theme system. |
| Battery indicator | Planned | Read from recovery-supported battery interfaces; show unavailable if missing. |
| Clock/timer | Planned | Use a reliable system clock and clear local-time behavior. |
| ADB sideload | Planned | UI integration only after backend and device USB support are verified. |
| Install OS package | Planned | Validate package format, device compatibility, and signature policy before offering install. |
| Backup/restore | Planned | Determine supported partitions and storage targets from verified device data. |
| Wipe | Planned | Require clear target selection and a second confirmation. |
| Mount | Planned | Display actual mount state and errors from the recovery backend. |
| Advanced | Planned | Keep diagnostics separate from operations that modify device state. |
| Reboot | Planned | Offer only destinations supported by the device and recovery backend. |
| Unlock Bootloader | Disabled | UI entry remains disabled until 2027-11-20. No unlocking or authorization bypass is implemented here. |

Update this table only when working code and test evidence exist.
