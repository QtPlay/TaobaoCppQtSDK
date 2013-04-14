#ifndef SIMBARPTADGROUPNONSEARCHBASEGETRESPONSE_H
#define SIMBARPTADGROUPNONSEARCHBASEGETRESPONSE_H

#include <TaoApiCpp/TaoResponse.h>


/**
 * @brief TOP RESPONSE API: 推广组下的定向推广基础数据查询
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class SimbaRptAdgroupnonsearchbaseGetResponse : public TaoResponse
{
public:
 virtual ~SimbaRptAdgroupnonsearchbaseGetResponse() { }

  QString getRptAdgroupNonsearchBase() const;
  void setRptAdgroupNonsearchBase (QString rptAdgroupNonsearchBase);
  virtual void parseNormalResponse();

 private:
/**
 * @brief 非搜索推广组基础对象
 **/
  QString rptAdgroupNonsearchBase;

};

#endif
