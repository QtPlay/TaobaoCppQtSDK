#include <TaoApiCpp/request/TaobaokeWidgetShopsConvertRequest.h>

QString TaobaokeWidgetShopsConvertRequest::getApiMethodName() const {
  return "taobao.taobaoke.widget.shops.convert";
}

QString TaobaokeWidgetShopsConvertRequest::getFields() const {
  return fields;
}
void TaobaokeWidgetShopsConvertRequest::setFields (QString fields) {
  this->fields = fields;
  appParams.insert("fields", fields);
}

bool TaobaokeWidgetShopsConvertRequest::getIsMobile() const {
  return isMobile;
}
void TaobaokeWidgetShopsConvertRequest::setIsMobile (bool isMobile) {
  this->isMobile = isMobile;
  appParams.insert("is_mobile", isMobile? "true": "false");
}

QString TaobaokeWidgetShopsConvertRequest::getOuterCode() const {
  return outerCode;
}
void TaobaokeWidgetShopsConvertRequest::setOuterCode (QString outerCode) {
  this->outerCode = outerCode;
  appParams.insert("outer_code", outerCode);
}

QString TaobaokeWidgetShopsConvertRequest::getSellerNicks() const {
  return sellerNicks;
}
void TaobaokeWidgetShopsConvertRequest::setSellerNicks (QString sellerNicks) {
  this->sellerNicks = sellerNicks;
  appParams.insert("seller_nicks", sellerNicks);
}



TaobaokeWidgetShopsConvertResponse *TaobaokeWidgetShopsConvertRequest::getResponseClass(const QString &session,
                               const QString &accessToken)
{
  TaobaokeWidgetShopsConvertResponse *tmpResponse = new TaobaokeWidgetShopsConvertResponse;
  QString result = getWebReply(session, accessToken);
  tmpResponse->setParser(TaoParser(result, taoApiInfo->format));
  tmpResponse->parseResponse();
  return tmpResponse;
}
