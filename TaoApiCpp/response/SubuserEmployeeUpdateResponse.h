#ifndef SUBUSEREMPLOYEEUPDATERESPONSE_H
#define SUBUSEREMPLOYEEUPDATERESPONSE_H

#include <TaoApiCpp/TaoResponse.h>


/**
 * @brief TOP RESPONSE API: 修改指定账户子账号的员工信息（通过主账号登陆只能修改属于该主账号下的员工信息）
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class SubuserEmployeeUpdateResponse : public TaoResponse
{
public:
 virtual ~SubuserEmployeeUpdateResponse() { }

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
