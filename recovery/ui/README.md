# Recovery UI

The target is a touchscreen-first recovery interface, implemented through the UI/theme facilities supported by the selected TWRP branch.

## Planned home screen

- Battery level and charging state, when exposed by recovery.
- Clock and elapsed-time display.
- Clear navigation tiles for the planned recovery features.
- Visible operation status and error messages.
- Confirmation screens for operations that change user data or partitions.

## Unlock Bootloader entry

The entry is intended to remain visibly disabled until **2027-11-20**. It is a UI gate only; it must not invoke undocumented commands, bypass OEM authorization, disable verified boot, or imply that a locked bootloader can accept an unsigned recovery.

## Implementation note

No UI framework has been selected or integrated yet. Do not treat mockups or placeholder labels as functional recovery controls.
