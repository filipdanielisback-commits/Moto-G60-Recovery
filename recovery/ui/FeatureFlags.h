#pragma once

// Project-level UI flags. These are placeholders until the TWRP UI integration
// is implemented and reviewed.
//
// Keep the bootloader entry disabled through 2027-11-19. This flag is not an
// unlocking mechanism and must never bypass OEM authorization or verified boot.
namespace moto_g60_recovery {

inline constexpr bool kUnlockBootloaderButtonEnabled = false;

}  // namespace moto_g60_recovery
