/*
 * data_format.cpp
 *
 *  Created on: 2013��12��24��
 *      Author: wqy
 */
#include "data_format.hpp"

namespace ardb
{
    void encode_meta(Buffer& buf, CommonMetaValue& meta)
    {
        BufferHelper::WriteFixUInt8(buf, (uint8)meta.type);
        BufferHelper::WriteVarUInt64(buf, meta.expireat);
        switch(meta.type)
        {
            //TODO
        }
    }
}



