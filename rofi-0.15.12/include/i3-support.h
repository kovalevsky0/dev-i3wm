#ifndef ROFI_I3_H
#define ROFI_I3_H

/**
 * These functions are dummies when i3 support is not compiled in.
 */

/**
 * @param socket_path The I3 IPC socket.
 * @param id          The window to focus on.
 *
 * If we want to switch windows in I3, we use I3 IPC mode.
 * This works more better then sending messages via X11.
 * Hopefully at some point, I3 gets fixed and this is not needed.
 * This function takes the path to the i3 IPC socket, and the XID of the window.
 */
void i3_support_focus_window ( Window id );

/**
 * @param display The display to read the i3 property from.
 *
 * Get the i3 socket from the X root window.
 * @returns TRUE when i3 is running, FALSE when not.
 */

int i3_support_initialize ( Display *display );

/**
 * Cleanup.
 */
void i3_support_free_internals ( void );
#endif // ROFI_I3_H
