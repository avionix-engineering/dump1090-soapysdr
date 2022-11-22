// Part of dump1090-soapysdr, a Mode S message decoder for SOAPYSDR devices.
//
// sdr_soapysdr.c: soapysdr supported SDR device support (header)
//
// Copyright (c) 2022 Ralf Heckhausen <ralf@avionix.eu>
//
// This file is free software: you may copy, redistribute and/or modify it
// under the terms of the GNU General Public License as published by the
// Free Software Foundation, either version 2 of the License, or (at your
// option) any later version.
//
// This file is distributed in the hope that it will be useful, but
// WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
// General Public License for more details.
//
// You should have received a copy of the GNU General Public License
// along with this program.  If not, see <http://www.gnu.org/licenses/>.

#include "dump1090.h"
#include "sdr_soapysdr.h"

#if defined(__arm__) || defined(__aarch64__)
// Assume we need to use a bounce buffer to avoid performance problems on Pis running kernel 5.x and using zerocopy
#  define USE_BOUNCE_BUFFER
#endif

static struct {
//    rtlsdr_dev_t *dev;
    bool digital_agc;
    int ppm_error;
    int direct_sampling;
    uint8_t *bounce_buffer;
    iq_convert_fn converter;
    struct converter_state *converter_state;
    int *gains;
    int gain_steps;
    int current_gain;
} SOAPYSDR;

//
// =============================== RTLSDR handling ==========================
//

void soapysdrInitConfig()
{
//    SOAPYSDR.dev = NULL;
    SOAPYSDR.digital_agc = false;
    SOAPYSDR.ppm_error = 0;
    SOAPYSDR.direct_sampling = 0;
    SOAPYSDR.bounce_buffer = NULL;
    SOAPYSDR.converter = NULL;
    SOAPYSDR.converter_state = NULL;
    SOAPYSDR.gains = NULL;
    SOAPYSDR.gain_steps = 0;
    SOAPYSDR.current_gain = 0;
}

void soapysdrShowHelp()
{
}

bool soapysdrHandleOption(int argc, char **argv, int *jptr)
{
    return true;
}

bool soapysdrOpen(void)
{
    return true;
}

static void soapysdrCallback(unsigned char *buf, uint32_t len, void *ctx)
{
}

void soapysdrRun()
{
}

void soapysdrStop()
{
}

void soapysdrClose()
{
}

int soapysdrGetGain()
{
	return 0;
}

int soapysdrGetMaxGain()
{
	return 0;
}

double soapysdrGetGainDb(int step)
{
	return 0.0;
}

int soapysdrSetGain(int step)
{
    return 0;
}

