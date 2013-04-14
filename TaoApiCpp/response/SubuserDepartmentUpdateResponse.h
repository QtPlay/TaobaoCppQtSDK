#ifndef SUBUSERDEPARTMENTUPDATERESPONSE_H
#define SUBUSERDEPARTMENTUPDATERESPONSE_H

#include <TaoApiCpp/TaoResponse.h>


/**
 * @brief TOP RESPONSE API: 通过指定主账号ID和部门ID来修改该部门的名称或该部门的父部门ID。（通过主账号登陆只能修改属于该主账号的部门信息）
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class SubuserDepartmentUpdateResponse : public TaoResponse
{
public:
 virtual ~SubuserDepartmentUpdateResponse() { }

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
