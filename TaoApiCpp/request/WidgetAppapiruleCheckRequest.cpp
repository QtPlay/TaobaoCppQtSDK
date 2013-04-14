#include <TaoApiCpp/request/WidgetAppapiruleCheckRequest.h>

QString WidgetAppapiruleCheckRequest::getApiMethodName() const {
  return "taobao.widget.appapirule.check";
}

QString WidgetAppapiruleCheckRequest::getApiName() const {
  return apiName;
}
void WidgetAppapiruleCheckRequest::setApiName (QString apiName) {
  this->apiName = apiName;
  appParams.insert("api_name", apiName);
}



WidgetAppapiruleCheckResponse *WidgetAppapiruleCheckRequest::getResponseClass(const QString &session,
                               const QString &accessToken)
{
  WidgetAppapiruleCheckResponse *tmpResponse = new WidgetAppapiruleCheckResponse;
  QString result = getWebReply(session, accessToken);
  tmpResponse->setParser(TaoParser(result, taoApiInfo->format));
  tmpResponse->parseResponse();
  return tmpResponse;
}
