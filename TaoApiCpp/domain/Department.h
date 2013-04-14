#ifndef DEPARTMENT_H
#define DEPARTMENT_H

#include <TaoApiCpp/TaoDomain.h>
#include <QString>


/**
 * @brief 部门信息
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class Department : public TaoDomain
{

public:
 virtual ~Department() { }

  qlonglong getDepartmentId() const;
  void setDepartmentId (qlonglong departmentId);
  QString getDepartmentName() const;
  void setDepartmentName (QString departmentName);
  qlonglong getParentId() const;
  void setParentId (qlonglong parentId);
  
  virtual void parseResponse();

private:
/**
 * @brief 部门ID
 **/
  qlonglong departmentId;

/**
 * @brief 部门名称
 **/
  QString departmentName;

/**
 * @brief 当前部门的父部门ID
 **/
  qlonglong parentId;

};

#endif  /* DEPARTMENT_H */
