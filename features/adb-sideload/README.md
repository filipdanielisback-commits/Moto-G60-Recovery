# ADB sideload

**Status: planned; not implemented.**

The UI should expose sideload only when the recovery backend reports that the device is ready and the USB/ADB transport is available.

Requirements:
- Show connection and transfer state.
- Display backend errors rather than generic success messages.
- Verify package compatibility and signature policy before installation.
- Never assume that a completed transfer means the package was installed.
