#ifndef FENXIAOGRADEUPDATEREQUEST_H
#define FENXIAOGRADEUPDATEREQUEST_H

#include <TaoApiCpp/TaoRequest.h>
#include <TaoApiCpp/TaoParser.h>
#include <TaoApiCpp/response/FenxiaoGradeUpdateResponse.h>

/**
 * TOP API: 修改等级
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class FenxiaoGradeUpdateRequest : public TaoRequest
{
 public:
  virtual QString getApiMethodName() const;

 qlonglong getGradeId() const
;  void setGradeId (qlonglong gradeId);

 QString getName() const
;  void setName (QString name);


  virtual FenxiaoGradeUpdateResponse *getResponseClass(const QString &session = "",
                               const QString &accessToken = ""); 

 private:
/**
 * @brief 等级ID
 **/
  qlonglong gradeId;

/**
 * @brief 等级名称，等级名称不可重复
 **/
  QString name;

};

#endif  /* FENXIAOGRADEUPDATEREQUEST_H */
