/*
   Copyright 2018 Conor Patrick

   Permission is hereby granted, free of charge, to any person obtaining a copy of
   this software and associated documentation files (the "Software"), to deal in
   the Software without restriction, including without limitation the rights to
   use, copy, modify, merge, publish, distribute, sublicense, and/or sell copies
   of the Software, and to permit persons to whom the Software is furnished to do
   so, subject to the following conditions:

   The above copyright notice and this permission notice shall be included in all
   copies or substantial portions of the Software.

   THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
   IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
   FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
   AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
   LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
   OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
   SOFTWARE.
*/
#define CTAP1_ERR_SUCCESS                   0x00
#define CTAP1_ERR_INVALID_COMMAND           0x01
#define CTAP1_ERR_INVALID_PARAMETER         0x02
#define CTAP1_ERR_INVALID_LENGTH            0x03
#define CTAP1_ERR_INVALID_SEQ               0x04
#define CTAP1_ERR_TIMEOUT                   0x05
#define CTAP1_ERR_CHANNEL_BUSY              0x06
#define CTAP1_ERR_LOCK_REQUIRED             0x0A
#define CTAP1_ERR_INVALID_CHANNEL           0x0B
#define CTAP2_ERR_CBOR_PARSING              0x10
#define CTAP2_ERR_CBOR_UNEXPECTED_TYPE      0x11
#define CTAP2_ERR_INVALID_CBOR              0x12
#define CTAP2_ERR_INVALID_CBOR_TYPE         0x13
#define CTAP2_ERR_MISSING_PARAMETER         0x14
#define CTAP2_ERR_LIMIT_EXCEEDED            0x15
#define CTAP2_ERR_UNSUPPORTED_EXTENSION     0x16
#define CTAP2_ERR_TOO_MANY_ELEMENTS         0x17
#define CTAP2_ERR_EXTENSION_NOT_SUPPORTED   0x18
#define CTAP2_ERR_CREDENTIAL_EXCLUDED       0x19
#define CTAP2_ERR_CREDENTIAL_NOT_VALID      0x20
#define CTAP2_ERR_PROCESSING                0x21
#define CTAP2_ERR_INVALID_CREDENTIAL        0x22
#define CTAP2_ERR_USER_ACTION_PENDING       0x23
#define CTAP2_ERR_OPERATION_PENDING         0x24
#define CTAP2_ERR_NO_OPERATIONS             0x25
#define CTAP2_ERR_UNSUPPORTED_ALGORITHM     0x26
#define CTAP2_ERR_OPERATION_DENIED          0x27
#define CTAP2_ERR_KEY_STORE_FULL            0x28
#define CTAP2_ERR_NOT_BUSY                  0x29
#define CTAP2_ERR_NO_OPERATION_PENDING      0x2A
#define CTAP2_ERR_UNSUPPORTED_OPTION        0x2B
#define CTAP2_ERR_INVALID_OPTION            0x2C
#define CTAP2_ERR_KEEPALIVE_CANCEL          0x2D
#define CTAP2_ERR_NO_CREDENTIALS            0x2E
#define CTAP2_ERR_USER_ACTION_TIMEOUT       0x2F
#define CTAP2_ERR_NOT_ALLOWED               0x30
#define CTAP2_ERR_PIN_INVALID               0x31
#define CTAP2_ERR_PIN_BLOCKED               0x32
#define CTAP2_ERR_PIN_AUTH_INVALID          0x33
#define CTAP2_ERR_PIN_AUTH_BLOCKED          0x34
#define CTAP2_ERR_PIN_NOT_SET               0x35
#define CTAP2_ERR_PIN_REQUIRED              0x36
#define CTAP2_ERR_PIN_POLICY_VIOLATION      0x37
#define CTAP2_ERR_PIN_TOKEN_EXPIRED         0x38
#define CTAP2_ERR_REQUEST_TOO_LARGE         0x39
#define CTAP1_ERR_OTHER                     0x7F
#define CTAP2_ERR_SPEC_LAST                 0xDF
#define CTAP2_ERR_EXTENSION_FIRST           0xE0
#define CTAP2_ERR_EXTENSION_LAST            0xEF
#define CTAP2_ERR_VENDOR_FIRST              0xF0
#define CTAP2_ERR_VENDOR_LAST               0xFF
