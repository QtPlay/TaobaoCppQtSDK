#include <TaoApiCpp/request/TaobaokeWidgetUrlConvertRequest.h>

QString TaobaokeWidgetUrlConvertRequest::getApiMethodName() const {
  return "taobao.taobaoke.widget.url.convert";
}

QString TaobaokeWidgetUrlConvertRequest::getOuterCode() const {
  return outerCode;
}
void TaobaokeWidgetUrlConvertRequest::setOuterCode (QString outerCode) {
  this->outerCode = outerCode;
  appParams.insert("outer_code", outerCode);
}

QString TaobaokeWidgetUrlConvertRequest::getUrl() const {
  return url;
}
void TaobaokeWidgetUrlConvertRequest::setUrl (QString url) {
  this->url = url;
  appParams.insert("url", url);
}



TaobaokeWidgetUrlConvertResponse *TaobaokeWidgetUrlConvertRequest::getResponseClass(const QString &session,
                               const QString &accessToken)
{
  TaobaokeWidgetUrlConvertResponse *tmpResponse = new TaobaokeWidgetUrlConvertResponse;
  QString result = getWebReply(session, accessToken);
  tmpResponse->setParser(TaoParser(result, taoApiInfo->format));
  tmpResponse->parseResponse();
  return tmpResponse;
}
