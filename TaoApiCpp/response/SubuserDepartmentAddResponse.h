#ifndef SUBUSERDEPARTMENTADDRESPONSE_H
#define SUBUSERDEPARTMENTADDRESPONSE_H

#include <TaoApiCpp/TaoResponse.h>


/**
 * @brief TOP RESPONSE API: 根据主账号ID以及部门名称、父部门ID创建新的部门信息（通过主账号登陆只能新建属于该主账号的部门信息）
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class SubuserDepartmentAddResponse : public TaoResponse
{
public:
 virtual ~SubuserDepartmentAddResponse() { }

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
