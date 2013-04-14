#ifndef SUBUSERINFOUPDATERESPONSE_H
#define SUBUSERINFOUPDATERESPONSE_H

#include <TaoApiCpp/TaoResponse.h>


/**
 * @brief TOP RESPONSE API: 修改指定账户子账号的基本信息（通过主账号登陆只能修改属于该主账号的子账号基本信息）
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class SubuserInfoUpdateResponse : public TaoResponse
{
public:
 virtual ~SubuserInfoUpdateResponse() { }

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
