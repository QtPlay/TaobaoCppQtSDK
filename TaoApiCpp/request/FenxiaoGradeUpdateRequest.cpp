#include <TaoApiCpp/request/FenxiaoGradeUpdateRequest.h>

QString FenxiaoGradeUpdateRequest::getApiMethodName() const {
  return "taobao.fenxiao.grade.update";
}

qlonglong FenxiaoGradeUpdateRequest::getGradeId() const {
  return gradeId;
}
void FenxiaoGradeUpdateRequest::setGradeId (qlonglong gradeId) {
  this->gradeId = gradeId;
  appParams.insert("grade_id", QString::number(gradeId));
}

QString FenxiaoGradeUpdateRequest::getName() const {
  return name;
}
void FenxiaoGradeUpdateRequest::setName (QString name) {
  this->name = name;
  appParams.insert("name", name);
}



FenxiaoGradeUpdateResponse *FenxiaoGradeUpdateRequest::getResponseClass(const QString &session,
                               const QString &accessToken)
{
  FenxiaoGradeUpdateResponse *tmpResponse = new FenxiaoGradeUpdateResponse;
  QString result = getWebReply(session, accessToken);
  tmpResponse->setParser(TaoParser(result, taoApiInfo->format));
  tmpResponse->parseResponse();
  return tmpResponse;
}
