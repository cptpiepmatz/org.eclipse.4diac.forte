/*******************************************************************************
 * Copyright (c) 2005 - 2013 Profactor GmbH, ACIN
 *               2020 Johannes Kepler University Linz
 *               2022 Primetals Technologies Austria GmbH
 * This program and the accompanying materials are made available under the
 * terms of the Eclipse Public License 2.0 which is available at
 * http://www.eclipse.org/legal/epl-2.0.
 *
 * SPDX-License-Identifier: EPL-2.0
 *
 * Contributors:
 *    Thomas Strasser, Ingomar Müller, Alois Zoitl, Gerhard Ebenhofer
 *    Ingo Hegny, Monika Wenger
 *      - initial implementation and rework communication infrastructure
 *    Ernst Blecha - add multibit partial access
 *    Martin Melik Merkumians - changes multibit access index from template
 *      parameter to call argument, make TForteDWord constructor explicit, adds
 *      implicit cast constructor, removed built-in type operator=, added
 *      castable CIEC types operator=
 *******************************************************************************/
#ifndef _FORTE_DWORD_H_
#define _FORTE_DWORD_H_

#include "forte_any_bit.h"
#include "forte_bool.h"
#include "forte_byte.h"
#include "forte_word.h"
#include <limits>

/*!\ingroup COREDTS CIEC_DWORD represents the dword data type according to IEC 61131.
 */
class CIEC_DWORD : public CIEC_ANY_BIT {
  DECLARE_FIRMWARE_DATATYPE(DWORD)

  public:
    typedef TForteDWord TValueType;

    static const TValueType scm_nMinVal = 0;
    static const TValueType scm_nMaxVal;

    CIEC_DWORD() = default;

    CIEC_DWORD(const CIEC_DWORD& paValue) :
        CIEC_ANY_BIT() {
      setValueSimple(paValue);
    }

    CIEC_DWORD(const CIEC_WORD& paValue) :
        CIEC_ANY_BIT() {
      setValueSimple(paValue);
    }

    CIEC_DWORD(const CIEC_BYTE& paValue) :
        CIEC_ANY_BIT() {
      setValueSimple(paValue);
    }

    CIEC_DWORD(const CIEC_BOOL &paValue) : CIEC_ANY_BIT() {
      setValueSimple(paValue);
    }

    explicit CIEC_DWORD(TForteDWord paValue) {
      setTUINT32(paValue);
    }

    ~CIEC_DWORD() override = default;

    CIEC_DWORD& operator =(const CIEC_DWORD &paValue) {
      // Simple value assignment - no self assignment check needed
      setValueSimple(paValue);
      return *this;
    }

    CIEC_DWORD& operator =(const CIEC_WORD &paValue) {
      // Simple value assignment - no self assignment check needed
      setValueSimple(paValue);
      return *this;
    }

    CIEC_DWORD& operator =(const CIEC_BYTE &paValue) {
      // Simple value assignment - no self assignment check needed
      setValueSimple(paValue);
      return *this;
    }

    CIEC_DWORD &operator=(const CIEC_BOOL &paValue) {
      // Simple value assignment - no self assignment check needed
      setValueSimple(paValue);
      return *this;
    }

    /*! \brief Converts CIEC_DWORD to elementary word
     *
     *   Conversion operator for converting CIEC_DWORD to elementary word
     */
    operator TForteDWord() const {
      return getTUINT32();
    }

    EDataTypeID getDataTypeID() const override {
      return CIEC_ANY::e_DWORD;
    }

    /*! \brief Partial access within a CIEC_DWORD (e.g. [DWORD].partial<CIEC_BOOL>(1))
     *
     */
    template <class T> PARTIAL_ACCESS<T, CIEC_DWORD> partial(size_t paIndex) {
      return PARTIAL_ACCESS<T,CIEC_DWORD>(*this, paIndex);
    }

};

#endif /*_FORTE_DWORD_H_*/
