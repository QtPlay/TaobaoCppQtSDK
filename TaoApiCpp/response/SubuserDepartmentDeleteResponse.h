#ifndef SUBUSERDEPARTMENTDELETERESPONSE_H
#define SUBUSERDEPARTMENTDELETERESPONSE_H

#include <TaoApiCpp/TaoResponse.h>


/**
 * @brief TOP RESPONSE API: 根据主账号Nick和部门ID删除该主账号下的该部门信息，如果待删除部门下有子账号则无法删除该部门（通过主账号登陆只能删除属于该主账号下的部门信息）
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class SubuserDepartmentDeleteResponse : public TaoResponse
{
public:
 virtual ~SubuserDepartmentDeleteResponse() { }

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
