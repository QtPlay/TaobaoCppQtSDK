#include <TaoApiCpp/request/CaipiaoShopInfoInputRequest.h>

QString CaipiaoShopInfoInputRequest::getApiMethodName() const {
  return "taobao.caipiao.shop.info.input";
}

QString CaipiaoShopInfoInputRequest::getActEndDate() const {
  return actEndDate;
}
void CaipiaoShopInfoInputRequest::setActEndDate (QString actEndDate) {
  this->actEndDate = actEndDate;
  appParams.insert("act_end_date", actEndDate);
}

QString CaipiaoShopInfoInputRequest::getActStartDate() const {
  return actStartDate;
}
void CaipiaoShopInfoInputRequest::setActStartDate (QString actStartDate) {
  this->actStartDate = actStartDate;
  appParams.insert("act_start_date", actStartDate);
}

qlonglong CaipiaoShopInfoInputRequest::getPresentType() const {
  return presentType;
}
void CaipiaoShopInfoInputRequest::setPresentType (qlonglong presentType) {
  this->presentType = presentType;
  appParams.insert("present_type", QString::number(presentType));
}

QString CaipiaoShopInfoInputRequest::getShopDesc() const {
  return shopDesc;
}
void CaipiaoShopInfoInputRequest::setShopDesc (QString shopDesc) {
  this->shopDesc = shopDesc;
  appParams.insert("shop_desc", shopDesc);
}

QString CaipiaoShopInfoInputRequest::getShopName() const {
  return shopName;
}
void CaipiaoShopInfoInputRequest::setShopName (QString shopName) {
  this->shopName = shopName;
  appParams.insert("shop_name", shopName);
}

qlonglong CaipiaoShopInfoInputRequest::getShopType() const {
  return shopType;
}
void CaipiaoShopInfoInputRequest::setShopType (qlonglong shopType) {
  this->shopType = shopType;
  appParams.insert("shop_type", QString::number(shopType));
}



CaipiaoShopInfoInputResponse *CaipiaoShopInfoInputRequest::getResponseClass(const QString &session,
                               const QString &accessToken)
{
  CaipiaoShopInfoInputResponse *tmpResponse = new CaipiaoShopInfoInputResponse;
  QString result = getWebReply(session, accessToken);
  tmpResponse->setParser(TaoParser(result, taoApiInfo->format));
  tmpResponse->parseResponse();
  return tmpResponse;
}
