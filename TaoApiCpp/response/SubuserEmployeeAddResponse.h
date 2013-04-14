#ifndef SUBUSEREMPLOYEEADDRESPONSE_H
#define SUBUSEREMPLOYEEADDRESPONSE_H

#include <TaoApiCpp/TaoResponse.h>


/**
 * @brief TOP RESPONSE API: 给指定子账号新增一个员工信息（通过主账号登陆只能新建属于该主账号的员工信息）
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class SubuserEmployeeAddResponse : public TaoResponse
{
public:
 virtual ~SubuserEmployeeAddResponse() { }

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
