#ifndef SIMBARPTADGROUPCREATIVEBASEGETRESPONSE_H
#define SIMBARPTADGROUPCREATIVEBASEGETRESPONSE_H

#include <TaoApiCpp/TaoResponse.h>


/**
 * @brief TOP RESPONSE API: 推广组下创意报表基础数据查询(汇总数据，不分类型)
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class SimbaRptAdgroupcreativebaseGetResponse : public TaoResponse
{
public:
 virtual ~SimbaRptAdgroupcreativebaseGetResponse() { }

  QString getRptAdgroupcreativeBaseList() const;
  void setRptAdgroupcreativeBaseList (QString rptAdgroupcreativeBaseList);
  virtual void parseNormalResponse();

 private:
/**
 * @brief 推广组下的创意基础数据列表
 **/
  QString rptAdgroupcreativeBaseList;

};

#endif
