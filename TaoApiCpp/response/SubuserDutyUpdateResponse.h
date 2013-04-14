#ifndef SUBUSERDUTYUPDATERESPONSE_H
#define SUBUSERDUTYUPDATERESPONSE_H

#include <TaoApiCpp/TaoResponse.h>


/**
 * @brief TOP RESPONSE API: 通过主账号ID和职务ID来修改该职务信息中的职务名称及职务级别信息（通过主账号登陆只能修改属于该主账号下的职务信息）
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class SubuserDutyUpdateResponse : public TaoResponse
{
public:
 virtual ~SubuserDutyUpdateResponse() { }

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
