#ifndef SUBUSERDUTYSGETRESPONSE_H
#define SUBUSERDUTYSGETRESPONSE_H

#include <TaoApiCpp/TaoResponse.h>
#include <QList>
#include <TaoApiCpp/domain/Duty.h>


/**
 * @brief TOP RESPONSE API: 通过主账号Nick获取该账户下的所有职务信息，职务信息中包括职务ID、职务名称以及职务等级（通过主账号登陆只能获取属于该主账号下的职务信息）
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class SubuserDutysGetResponse : public TaoResponse
{
public:
 virtual ~SubuserDutysGetResponse() { }

  QList<Duty> getDutys() const;
  void setDutys (QList<Duty> dutys);
  virtual void parseNormalResponse();

 private:
/**
 * @brief 职务信息
 **/
  QList<Duty> dutys;

};

#endif
