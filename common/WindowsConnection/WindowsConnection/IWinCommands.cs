﻿/* Copyright (C) 2014--2018 Stony Brook University
   Copyright (C) 2016--2018 The University of North Carolina at Chapel Hill

   This file is part of the Sinter Remote Desktop System.

   Sinter is dual-licensed, available under a commercial license or
   for free subject to the LGPL.  

   Sinter is free software: you can redistribute it and/or modify it
   under the terms of the GNU Lesser General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.  Sinter is distributed in the
   hope that it will be useful, but WITHOUT ANY WARRANTY; without even
   the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR
   PURPOSE.  See the GNU Lesser General Public License for more details.  You
   should have received a copy of the GNU Lesser General Public License along
   with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

namespace Sintering {

  public interface IWinCommands {

    // common parts
    ConnectionHandler connection { get; set; }

    bool bPasscodeVerified { get; }

    void execute_stop_scraping();

    void execute_verify_passcode_req(Sinter sinter);
    void execute_verify_passcode_res(Sinter sinter);

    // server related calls
    void execute_ls_req(Sinter sinter);
    void execute_ls_l_req(Sinter sinter);
    void execute_delta(Sinter sinter);
    void execute_event(Sinter sinter);

    // client related calls
    void execute_ls_res(Sinter sinter);
    void execute_ls_l_res(Sinter sinter);
    void execute_action(Sinter sinter);
    void execute_kbd(Sinter sinter);
    void execute_mouse(Sinter sinter);
    void execute_listener(Sinter sinter);
  }
}
