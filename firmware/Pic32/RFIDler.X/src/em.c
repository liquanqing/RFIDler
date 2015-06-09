/***************************************************************************
 * A copy of the GNU GPL is appended to this file.                         *
 *                                                                         *
 * This licence is based on the nmap licence, and we express our gratitude *
 * for the work that went into producing it. There is no other connection  *
 * between RFIDler and nmap either expressed or implied.                   *
 *                                                                         *
 ********************** IMPORTANT RFIDler LICENSE TERMS ********************
 *                                                                         *
 *                                                                         *
 * All references to RFIDler herein imply all it's derivatives, namely:    *
 *                                                                         *
 * o RFIDler-LF Standard                                                   *
 * o RFIDler-LF Lite                                                       *
 * o RFIDler-LF Nekkid                                                     *
 *                                                                         *
 *                                                                         *
 * RFIDler is (C) 2013-2014 Aperture Labs Ltd.                             *
 *                                                                         *
 * This program is free software; you may redistribute and/or modify it    *
 * under the terms of the GNU General Public License as published by the   *
 * Free Software Foundation; Version 2 ("GPL"), BUT ONLY WITH ALL OF THE   *
 * CLARIFICATIONS AND EXCEPTIONS DESCRIBED HEREIN.  This guarantees your   *
 * right to use, modify, and redistribute this software under certain      *
 * conditions.  If you wish to embed RFIDler technology into proprietary   *
 * software or hardware, we sell alternative licenses                      *
 * (contact sales@aperturelabs.com).                                       *
 *                                                                         *
 * Note that the GPL places important restrictions on "derivative works",  *
 * yet it does not provide a detailed definition of that term.  To avoid   *
 * misunderstandings, we interpret that term as broadly as copyright law   *
 * allows.  For example, we consider an application to constitute a        *
 * derivative work for the purpose of this license if it does any of the   *
 * following with any software or content covered by this license          *
 * ("Covered Software"):                                                   *
 *                                                                         *
 * o Integrates source code from Covered Software.                         *
 *                                                                         *
 * o Is designed specifically to execute Covered Software and parse the    *
 * results (as opposed to typical shell or execution-menu apps, which will *
 * execute anything you tell them to).                                     *
 *                                                                         *
 * o Includes Covered Software in a proprietary executable installer.  The *
 * installers produced by InstallShield are an example of this.  Including *
 * RFIDler with other software in compressed or archival form does not     *
 * trigger this provision, provided appropriate open source decompression  *
 * or de-archiving software is widely available for no charge.  For the    *
 * purposes of this license, an installer is considered to include Covered *
 * Software even if it actually retrieves a copy of Covered Software from  *
 * another source during runtime (such as by downloading it from the       *
 * Internet).                                                              *
 *                                                                         *
 * o Links (statically or dynamically) to a library which does any of the  *
 * above.                                                                  *
 *                                                                         *
 * o Executes a helper program, module, or script to do any of the above.  *
 *                                                                         *
 * This list is not exclusive, but is meant to clarify our interpretation  *
 * of derived works with some common examples.  Other people may interpret *
 * the plain GPL differently, so we consider this a special exception to   *
 * the GPL that we apply to Covered Software.  Works which meet any of     *
 * these conditions must conform to all of the terms of this license,      *
 * particularly including the GPL Section 3 requirements of providing      *
 * source code and allowing free redistribution of the work as a whole.    *
 *                                                                         *
 * As another special exception to the GPL terms, Aperture Labs Ltd. grants*
 * permission to link the code of this program with any version of the     *
 * OpenSSL library which is distributed under a license identical to that  *
 * listed in the included docs/licenses/OpenSSL.txt file, and distribute   *
 * linked combinations including the two.                                  *
 *                                                                         *
 * Any redistribution of Covered Software, including any derived works,    *
 * must obey and carry forward all of the terms of this license, including *
 * obeying all GPL rules and restrictions.  For example, source code of    *
 * the whole work must be provided and free redistribution must be         *
 * allowed.  All GPL references to "this License", are to be treated as    *
 * including the terms and conditions of this license text as well.        *
 *                                                                         *
 * Because this license imposes special exceptions to the GPL, Covered     *
 * Work may not be combined (even as part of a larger work) with plain GPL *
 * software.  The terms, conditions, and exceptions of this license must   *
 * be included as well.  This license is incompatible with some other open *
 * source licenses as well.  In some cases we can relicense portions of    *
 * RFIDler or grant special permissions to use it in other open source     *
 * software.  Please contact sales@aperturelabs.com with any such requests.*
 * Similarly, we don't incorporate incompatible open source software into  *
 * Covered Software without special permission from the copyright holders. *
 *                                                                         *
 * If you have any questions about the licensing restrictions on using     *
 * RFIDler in other works, are happy to help.  As mentioned above, we also *
 * offer alternative license to integrate RFIDler into proprietary         *
 * applications and appliances.  These contracts have been sold to dozens  *
 * of software vendors, and generally include a perpetual license as well  *
 * as providing for priority support and updates.  They also fund the      *
 * continued development of RFIDler.  Please email sales@aperturelabs.com  *
 * for further information.                                                *
 * If you have received a written license agreement or contract for        *
 * Covered Software stating terms other than these, you may choose to use  *
 * and redistribute Covered Software under those terms instead of these.   *
 *                                                                         *
 * Source is provided to this software because we believe users have a     *
 * right to know exactly what a program is going to do before they run it. *
 * This also allows you to audit the software for security holes (none     *
 * have been found so far).                                                *
 *                                                                         *
 * Source code also allows you to port RFIDler to new platforms, fix bugs, *
 * and add new features.  You are highly encouraged to send your changes   *
 * to the RFIDler mailing list for possible incorporation into the         *
 * main distribution.  By sending these changes to Aperture Labs Ltd. or   *
 * one of the Aperture Labs Ltd. development mailing lists, or checking    *
 * them into the RFIDler source code repository, it is understood (unless  *
 * you specify otherwise) that you are offering the RFIDler Project        *
 * (Aperture Labs Ltd.) the unlimited, non-exclusive right to reuse,       *
 * modify, and relicense the code.  RFIDler will always be available Open  *
 * Source, but this is important because the inability to relicense code   *
 * has caused devastating problems for other Free Software projects (such  *
 * as KDE and NASM).  We also occasionally relicense the code to third     *
 * parties as discussed above. If you wish to specify special license      *
 * conditions of your contributions, just say so when you send them.       *
 *                                                                         *
 * This program is distributed in the hope that it will be useful, but     *
 * WITHOUT ANY WARRANTY; without even the implied warranty of              *
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the RFIDler   *
 * license file for more details (it's in a COPYING file included with     *
 * RFIDler, and also available from                                        *
 *   https://github.com/ApertureLabsLtd/RFIDler/COPYING                    *
 *                                                                         *
 ***************************************************************************/

// Author: Adam Laurie <adam@aperturelabs.com>



#include "HardwareProfile.h"
#include "rfidler.h"
#include "ask.h"
#include "em.h"
#include "util.h"

// support routines for EM tags
//

BOOL em4x02_get_uid(BYTE *response)
{
     return ask_raw_get_uid(response);
}

BOOL em4x02_hex_to_uid(BYTE *response, BYTE *hex)
{
    BYTE tmp[40];

    if(em4x02_hex_to_bin(tmp, hex))
        return binarraytohex(response, tmp, 40);
    return FALSE;
}

// convert null-terminated hex UID (10 digits) to em4x02 encoded hex
BOOL hex_to_em4x02_hex(unsigned char *em, unsigned char *hex)
{
    if(hex_to_em4x02_bin(em, hex))
        return binarraytohex(em, em, 64);
    else
        return FALSE;
}

// convert null-terminated hex UID (10 digits) to 64 bit em4x02 encoded binary array
BOOL hex_to_em4x02_bin(unsigned char *em, unsigned char *hex)
{
    unsigned char tmp1[10], tmp2[40];

    if(strlen(hex) > 10)
        return FALSE;

    // pad to 10 hex digits
    memset(tmp1, '0', 10);
    memcpy(tmp1 + 10 - strlen(hex), hex, strlen(hex));
    hextobinarray(tmp2, tmp1);
    // encoding is the same as unique, but source data is in a different order
    bin_to_em4x02_bin(em, tmp2);
    return TRUE;
}

// convert 16 hex digit/64 bit EM4X02 ID to 40 bit raw UID
// safe to do in-place as we use a scratchpad
BOOL em4x02_hex_to_bin(unsigned char *bin, unsigned char *em)
{
    unsigned char i, j, colparity[4]= {0,0,0,0};

    if(!hextobinarray(TmpBits, em))
        return FALSE;
    
    // check header
    for(i= 0 ; i < 9 ; ++i)
        if(TmpBits[i] != 0x01)
            return FALSE;

    // skip 9 bit header and strip/check parity bits - every 5th bit
    for(i= 0 ; i < 10 ; ++i)
    {
        memcpy(bin + i * 4, (TmpBits + 9) + i * 5, 4);
        if(parity(bin + i * 4, EVEN, 4) != TmpBits[9 + i * 5 + 4])
            return FALSE;
    }

    // check column parity
    for(i= 0 ; i < 10 ; ++i)
        for(j= 0; j < 4 ; ++j)
            colparity[j] += bin[i * 4 + j];
    for(i= 0 ; i < 4 ; ++i)
        if(colparity[i] % 2 != TmpBits[9 + 50 + i])
            return FALSE;

    return TRUE;
}

// convert 40 bit ID (array of 1 byte per bit 0/1 values) to em 64 bit ID
void bin_to_em4x02_bin(unsigned char *em, unsigned char *bin)
{
    unsigned char i, j, parity, colparity[4]= {0,0,0,0};

    // output header '111111111'
    memset(em, 0x01, 9);
    em += 9;

    //  output 10 blocks of 4 bits plus parity for each block
    for(i= 0 ; i < 10 ; ++i, ++em)
    {
        for(j= parity= 0 ; j < 4 ; ++j, ++bin, ++em)
        {
            *em= *bin;
            parity += *bin;
            // calculate column parity for later
            colparity[j] += *bin;
        }
        // output parity
        *em= parity % 2;
    }

    // output column parity
    for(i= 0 ; i < 4 ; ++i, ++em)
        *em= colparity[i] % 2;

    // output stop bit
    *(em++)= 0x00;
}
