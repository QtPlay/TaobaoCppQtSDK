#ifndef SUBUSERDEPARTMENTSGETRESPONSE_H
#define SUBUSERDEPARTMENTSGETRESPONSE_H

#include <TaoApiCpp/TaoResponse.h>
#include <QList>
#include <TaoApiCpp/domain/Department.h>


/**
 * @brief TOP RESPONSE API: 获取指定账户的所有部门列表，其实包括有每个部门的ID、父部门ID、部门名称（通过主账号登陆只能查询属于该主账号下的所有部门信息）。
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class SubuserDepartmentsGetResponse : public TaoResponse
{
public:
 virtual ~SubuserDepartmentsGetResponse() { }

  QList<Department> getDepartments() const;
  void setDepartments (QList<Department> departments);
  virtual void parseNormalResponse();

 private:
/**
 * @brief 部门信息
 **/
  QList<Department> departments;

};

#endif
