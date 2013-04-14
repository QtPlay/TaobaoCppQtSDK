#include <TaoApiCpp/request/FenxiaoGradeAddRequest.h>

QString FenxiaoGradeAddRequest::getApiMethodName() const {
  return "taobao.fenxiao.grade.add";
}

QString FenxiaoGradeAddRequest::getName() const {
  return name;
}
void FenxiaoGradeAddRequest::setName (QString name) {
  this->name = name;
  appParams.insert("name", name);
}



FenxiaoGradeAddResponse *FenxiaoGradeAddRequest::getResponseClass(const QString &session,
                               const QString &accessToken)
{
  FenxiaoGradeAddResponse *tmpResponse = new FenxiaoGradeAddResponse;
  QString result = getWebReply(session, accessToken);
  tmpResponse->setParser(TaoParser(result, taoApiInfo->format));
  tmpResponse->parseResponse();
  return tmpResponse;
}
