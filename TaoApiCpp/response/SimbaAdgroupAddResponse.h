#ifndef SIMBAADGROUPADDRESPONSE_H
#define SIMBAADGROUPADDRESPONSE_H

#include <TaoApiCpp/TaoResponse.h>
#include <TaoApiCpp/domain/ADGroup.h>


/**
 * @brief TOP RESPONSE API: 创建一个推广组
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class SimbaAdgroupAddResponse : public TaoResponse
{
public:
 virtual ~SimbaAdgroupAddResponse() { }

  ADGroup getAdgroup() const;
  void setAdgroup (ADGroup adgroup);
  virtual void parseNormalResponse();

 private:
/**
 * @brief 新增加的推广组
 **/
  ADGroup adgroup;

};

#endif
