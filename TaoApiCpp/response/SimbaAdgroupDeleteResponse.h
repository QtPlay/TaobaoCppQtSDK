#ifndef SIMBAADGROUPDELETERESPONSE_H
#define SIMBAADGROUPDELETERESPONSE_H

#include <TaoApiCpp/TaoResponse.h>
#include <TaoApiCpp/domain/ADGroup.h>


/**
 * @brief TOP RESPONSE API: 删除一个推广组
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class SimbaAdgroupDeleteResponse : public TaoResponse
{
public:
 virtual ~SimbaAdgroupDeleteResponse() { }

  ADGroup getAdgroup() const;
  void setAdgroup (ADGroup adgroup);
  virtual void parseNormalResponse();

 private:
/**
 * @brief 被删除的推广组
 **/
  ADGroup adgroup;

};

#endif
