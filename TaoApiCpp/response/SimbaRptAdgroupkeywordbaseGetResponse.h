#ifndef SIMBARPTADGROUPKEYWORDBASEGETRESPONSE_H
#define SIMBARPTADGROUPKEYWORDBASEGETRESPONSE_H

#include <TaoApiCpp/TaoResponse.h>


/**
 * @brief TOP RESPONSE API: 推广组下的词基础报表数据查询(明细数据不分类型查询)
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class SimbaRptAdgroupkeywordbaseGetResponse : public TaoResponse
{
public:
 virtual ~SimbaRptAdgroupkeywordbaseGetResponse() { }

  QString getRptAdgroupkeywordBaseList() const;
  void setRptAdgroupkeywordBaseList (QString rptAdgroupkeywordBaseList);
  virtual void parseNormalResponse();

 private:
/**
 * @brief 词基础数据返回结果
 **/
  QString rptAdgroupkeywordBaseList;

};

#endif
