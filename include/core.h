#pragma once

#include <config.h>
#include <common.h>
#include <PowerMaxAlarmNG.h>

const static String version = "1.0.0";

void addCallback(std::function<void()> callback);
