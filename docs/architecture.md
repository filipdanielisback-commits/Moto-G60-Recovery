# Architecture

## Current phase

This repository is a planning and source scaffold. It is not yet a TWRP device tree and does not produce a recovery image.

## Intended layers

1. **Recovery base** — a compatible TWRP source branch selected only after the device's Android generation and boot architecture are verified.
2. **Device integration** — a Moto G60-specific device tree, kernel configuration or prebuilt kernel, recovery fstab, and required vendor components.
3. **Touch UI** — a TWRP-compatible theme and menu layout. Touch navigation is the target once recovery is running; bootloader entry and other pre-boot operations may still require hardware keys or the vendor's supported host tools.
4. **Feature modules** — documented, separately tested wrappers for sideload, package installation, backup, wipe, mount, advanced information, and reboot.
5. **Portability** — each additional device gets its own verified device configuration. A shared UI does not make recovery images interchangeable.

## Design rules

- Do not guess partition names, offsets, sizes, boot header versions, kernel parameters, or image output type.
- Keep destructive operations behind explicit confirmation and show the target partition or data area before execution.
- Never report an operation as successful until the recovery backend confirms it.
- Keep bootloader unlocking outside this recovery's feature implementation. The UI gate is informational and must not bypass OEM authorization or verified boot.
- Keep device-specific code isolated from generic UI code.

## Build integration

TWRP's build system and the selected device tree determine the actual build target. Do not add a generic CMake or Android app build command and call it a recovery build. Select `recoveryimage`, `bootimage`, or `vendorbootimage` only after confirming where recovery resides on the exact device variant.
