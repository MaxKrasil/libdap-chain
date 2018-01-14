#pragma once

#include <stdint.h>
#include "dap_common.h"
#include "dap_chain_common.h"
#include "dap_chain_section_tx.h"

/**
  * @struct dap_chain_tx_out
  * @brief Transaction item outout
  */
typedef struct dap_chain_tx_out{
    struct {
        dap_chain_tx_item_type_t type:8; ///           @param    type            @brief  Transaction item type
        uint64_t value; ///                       @param    value           @brief  Number of Datoshis ( DAP/10^9 ) to be transfered
        dap_chain_sig_type_t sig_type:16; ///     @param    sig_type        @brief  Signature type
        uint32_t sig_size; ///                    @param    sig_size        @brief  Signature size
    } header; /// Only header's hash is used for verification
    uint8_t sig[]; /// @param sig @brief raw signatura dat
} DAP_ALIGN_PACKED dap_chain_tx_out_t;
