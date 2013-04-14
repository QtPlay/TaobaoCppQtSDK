#ifndef SIMBARPTADGROUPBASEGETRESPONSE_H
#define SIMBARPTADGROUPBASEGETRESPONSE_H

#include <TaoApiCpp/TaoResponse.h>


/**
 * @brief TOP RESPONSE API: 推广组基础报表数据对象
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class SimbaRptAdgroupbaseGetResponse : public TaoResponse
{
public:
 virtual ~SimbaRptAdgroupbaseGetResponse() { }

  QString getRptAdgroupBaseList() const;
  void setRptAdgroupBaseList (QString rptAdgroupBaseList);
  virtual void parseNormalResponse();

 private:
/**
 * @brief 广告组基础数据对象
 **/
  QString rptAdgroupBaseList;

};

#endif
