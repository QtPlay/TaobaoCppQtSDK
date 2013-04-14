#ifndef FENXIAOGRADEDELETEREQUEST_H
#define FENXIAOGRADEDELETEREQUEST_H

#include <TaoApiCpp/TaoRequest.h>
#include <TaoApiCpp/TaoParser.h>
#include <TaoApiCpp/response/FenxiaoGradeDeleteResponse.h>

/**
 * TOP API: 删除等级
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class FenxiaoGradeDeleteRequest : public TaoRequest
{
 public:
  virtual QString getApiMethodName() const;

 qlonglong getGradeId() const
;  void setGradeId (qlonglong gradeId);


  virtual FenxiaoGradeDeleteResponse *getResponseClass(const QString &session = "",
                               const QString &accessToken = ""); 

 private:
/**
 * @brief 等级ID
 **/
  qlonglong gradeId;

};

#endif  /* FENXIAOGRADEDELETEREQUEST_H */
