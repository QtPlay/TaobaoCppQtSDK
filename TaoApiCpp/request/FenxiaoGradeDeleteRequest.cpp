#include <TaoApiCpp/request/FenxiaoGradeDeleteRequest.h>

QString FenxiaoGradeDeleteRequest::getApiMethodName() const {
  return "taobao.fenxiao.grade.delete";
}

qlonglong FenxiaoGradeDeleteRequest::getGradeId() const {
  return gradeId;
}
void FenxiaoGradeDeleteRequest::setGradeId (qlonglong gradeId) {
  this->gradeId = gradeId;
  appParams.insert("grade_id", QString::number(gradeId));
}



FenxiaoGradeDeleteResponse *FenxiaoGradeDeleteRequest::getResponseClass(const QString &session,
                               const QString &accessToken)
{
  FenxiaoGradeDeleteResponse *tmpResponse = new FenxiaoGradeDeleteResponse;
  QString result = getWebReply(session, accessToken);
  tmpResponse->setParser(TaoParser(result, taoApiInfo->format));
  tmpResponse->parseResponse();
  return tmpResponse;
}
