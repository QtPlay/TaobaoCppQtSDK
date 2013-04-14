#include <TaoApiCpp/request/UmpToolAddRequest.h>

QString UmpToolAddRequest::getApiMethodName() const {
  return "taobao.ump.tool.add";
}

QString UmpToolAddRequest::getContent() const {
  return content;
}
void UmpToolAddRequest::setContent (QString content) {
  this->content = content;
  appParams.insert("content", content);
}



UmpToolAddResponse *UmpToolAddRequest::getResponseClass(const QString &session,
                               const QString &accessToken)
{
  UmpToolAddResponse *tmpResponse = new UmpToolAddResponse;
  QString result = getWebReply(session, accessToken);
  tmpResponse->setParser(TaoParser(result, taoApiInfo->format));
  tmpResponse->parseResponse();
  return tmpResponse;
}
