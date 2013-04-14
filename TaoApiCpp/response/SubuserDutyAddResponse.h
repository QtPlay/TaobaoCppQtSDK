#ifndef SUBUSERDUTYADDRESPONSE_H
#define SUBUSERDUTYADDRESPONSE_H

#include <TaoApiCpp/TaoResponse.h>


/**
 * @brief TOP RESPONSE API: 通过主账号ID来增加指定账户的职务信息，职务信息中包括职务名称以及职务级别（通过主账号登陆只能新建属于该主账号的职务信息）
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class SubuserDutyAddResponse : public TaoResponse
{
public:
 virtual ~SubuserDutyAddResponse() { }

  bool getIsSuccess() const;
  void setIsSuccess (bool isSuccess);
  virtual void parseNormalResponse();

 private:
/**
 * @brief 操作是否成功 true:操作成功; false:操作失败
 **/
  bool isSuccess;

};

#endif
