#ifndef SUBUSERDUTYUPDATEREQUEST_H
#define SUBUSERDUTYUPDATEREQUEST_H

#include <TaoApiCpp/TaoRequest.h>
#include <TaoApiCpp/TaoParser.h>
#include <TaoApiCpp/response/SubuserDutyUpdateResponse.h>

/**
 * TOP API: 通过主账号ID和职务ID来修改该职务信息中的职务名称及职务级别信息（通过主账号登陆只能修改属于该主账号下的职务信息）
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class SubuserDutyUpdateRequest : public TaoRequest
{
 public:
  virtual QString getApiMethodName() const;

 qlonglong getDutyId() const
;  void setDutyId (qlonglong dutyId);

 qlonglong getDutyLevel() const
;  void setDutyLevel (qlonglong dutyLevel);

 QString getDutyName() const
;  void setDutyName (QString dutyName);

 QString getUserNick() const
;  void setUserNick (QString userNick);


  virtual SubuserDutyUpdateResponse *getResponseClass(const QString &session = "",
                               const QString &accessToken = ""); 

 private:
/**
 * @brief 职务ID
 **/
  qlonglong dutyId;

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

#endif  /* SUBUSERDUTYUPDATEREQUEST_H */
