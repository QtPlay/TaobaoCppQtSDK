#ifndef SIMBAADGROUPCATMATCHUPDATERESPONSE_H
#define SIMBAADGROUPCATMATCHUPDATERESPONSE_H

#include <TaoApiCpp/TaoResponse.h>
#include <TaoApiCpp/domain/ADGroupCatmatch.h>


/**
 * @brief TOP RESPONSE API: 更新一个推广组的类目出价，可以设置类目出价、是否使用默认出价、是否打开类目出价
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class SimbaAdgroupCatmatchUpdateResponse : public TaoResponse
{
public:
 virtual ~SimbaAdgroupCatmatchUpdateResponse() { }

  ADGroupCatmatch getAdgroupcatmatch() const;
  void setAdgroupcatmatch (ADGroupCatmatch adgroupcatmatch);
  virtual void parseNormalResponse();

 private:
/**
 * @brief 推广组的类目出价对象
 **/
  ADGroupCatmatch adgroupcatmatch;

};

#endif
