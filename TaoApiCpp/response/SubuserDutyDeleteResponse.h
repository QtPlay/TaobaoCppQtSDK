#ifndef SUBUSERDUTYDELETERESPONSE_H
#define SUBUSERDUTYDELETERESPONSE_H

#include <TaoApiCpp/TaoResponse.h>


/**
 * @brief TOP RESPONSE API: 通过主账号ID和职务ID来删除主账号下的该职务信息。使用此职务的员工中职务一栏将变为空（通过主账号登陆只能删除属于该主账号下的职务信息）
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class SubuserDutyDeleteResponse : public TaoResponse
{
public:
 virtual ~SubuserDutyDeleteResponse() { }

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
