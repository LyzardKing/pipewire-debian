/*
 * Copyright (c) 2018 Roc authors
 *
 * This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/.
 */

//! @file roc_audio/null_writer.h
//! @brief Null writer.

#ifndef ROC_AUDIO_NULL_WRITER_H_
#define ROC_AUDIO_NULL_WRITER_H_

#include "roc_audio/iwriter.h"
#include "roc_core/noncopyable.h"

namespace roc {
namespace audio {

//! Null writer.
class NullWriter : public IWriter, public core::NonCopyable<> {
public:
    //! Write audio frame.
    virtual void write(Frame& frame);
};

} // namespace audio
} // namespace roc

#endif // ROC_AUDIO_NULL_WRITER_H_
