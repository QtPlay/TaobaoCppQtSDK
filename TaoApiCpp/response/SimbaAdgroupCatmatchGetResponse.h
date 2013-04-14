#ifndef SIMBAADGROUPCATMATCHGETRESPONSE_H
#define SIMBAADGROUPCATMATCHGETRESPONSE_H

#include <TaoApiCpp/TaoResponse.h>
#include <TaoApiCpp/domain/ADGroupCatmatch.h>


/**
 * @brief TOP RESPONSE API: 取得一个推广组的类目出价
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class SimbaAdgroupCatmatchGetResponse : public TaoResponse
{
public:
 virtual ~SimbaAdgroupCatmatchGetResponse() { }

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
