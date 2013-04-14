#ifndef SUBUSERDUTYADDREQUEST_H
#define SUBUSERDUTYADDREQUEST_H

#include <TaoApiCpp/TaoRequest.h>
#include <TaoApiCpp/TaoParser.h>
#include <TaoApiCpp/response/SubuserDutyAddResponse.h>

/**
 * TOP API: 通过主账号ID来增加指定账户的职务信息，职务信息中包括职务名称以及职务级别（通过主账号登陆只能新建属于该主账号的职务信息）
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class SubuserDutyAddRequest : public TaoRequest
{
 public:
  virtual QString getApiMethodName() const;

 qlonglong getDutyLevel() const
;  void setDutyLevel (qlonglong dutyLevel);

 QString getDutyName() const
;  void setDutyName (QString dutyName);

 QString getUserNick() const
;  void setUserNick (QString userNick);


  virtual SubuserDutyAddResponse *getResponseClass(const QString &session = "",
                               const QString &accessToken = ""); 

 private:
/**
 * @brief 职务级别
 **/
  qlonglong dutyLevel;

/**
 * @brief 职务名称
 **/
  QString dutyName;

/**
 * @brief 主账号用户名
 **/
  QString userNick;

};

#endif  /* SUBUSERDUTYADDREQUEST_H */
