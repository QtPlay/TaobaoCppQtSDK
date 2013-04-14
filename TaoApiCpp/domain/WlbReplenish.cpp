#include <TaoApiCpp/domain/WlbReplenish.h>
QString WlbReplenish::getEstimateValue() const {
  return estimateValue;
}
void WlbReplenish::setEstimateValue (QString estimateValue) {
  this->estimateValue = estimateValue;
}

QString WlbReplenish::getHistoryValue() const {
  return historyValue;
}
void WlbReplenish::setHistoryValue (QString historyValue) {
  this->historyValue = historyValue;
}

qlonglong WlbReplenish::getItemId() const {
  return itemId;
}
void WlbReplenish::setItemId (qlonglong itemId) {
  this->itemId = itemId;
}

qlonglong WlbReplenish::getRetrievalCount() const {
  return retrievalCount;
}
void WlbReplenish::setRetrievalCount (qlonglong retrievalCount) {
  this->retrievalCount = retrievalCount;
}

qlonglong WlbReplenish::getSellCount() const {
  return sellCount;
}
void WlbReplenish::setSellCount (qlonglong sellCount) {
  this->sellCount = sellCount;
}

QString WlbReplenish::getStoreCode() const {
  return storeCode;
}
void WlbReplenish::setStoreCode (QString storeCode) {
  this->storeCode = storeCode;
}

qlonglong WlbReplenish::getTransportCount() const {
  return transportCount;
}
void WlbReplenish::setTransportCount (qlonglong transportCount) {
  this->transportCount = transportCount;
}

qlonglong WlbReplenish::getUserId() const {
  return userId;
}
void WlbReplenish::setUserId (qlonglong userId) {
  this->userId = userId;
}

qlonglong WlbReplenish::getWarnCount() const {
  return warnCount;
}
void WlbReplenish::setWarnCount (qlonglong warnCount) {
  this->warnCount = warnCount;
}


void WlbReplenish::parseResponse() {
  if (responseParser->hasName("estimate_value")) {
  estimateValue = responseParser->getStrByName("estimate_value");
  }
  if (responseParser->hasName("history_value")) {
  historyValue = responseParser->getStrByName("history_value");
  }
  if (responseParser->hasName("item_id")) {
  itemId = responseParser->getNumByName("item_id");
  }
  if (responseParser->hasName("retrieval_count")) {
  retrievalCount = responseParser->getNumByName("retrieval_count");
  }
  if (responseParser->hasName("sell_count")) {
  sellCount = responseParser->getNumByName("sell_count");
  }
  if (responseParser->hasName("store_code")) {
  storeCode = responseParser->getStrByName("store_code");
  }
  if (responseParser->hasName("transport_count")) {
  transportCount = responseParser->getNumByName("transport_count");
  }
  if (responseParser->hasName("user_id")) {
  userId = responseParser->getNumByName("user_id");
  }
  if (responseParser->hasName("warn_count")) {
  warnCount = responseParser->getNumByName("warn_count");
  }

}

