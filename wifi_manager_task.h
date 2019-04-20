#pragma once

#include "wifi_manager.h"

void wifi_manager_start_task(wifi_manager_callback connect_callback, 
	void * connect_param,
	wifi_manager_callback disconnect_callback,
    void * disconnect_param);