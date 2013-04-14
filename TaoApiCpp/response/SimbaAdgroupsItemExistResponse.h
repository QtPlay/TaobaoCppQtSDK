#ifndef SIMBAADGROUPSITEMEXISTRESPONSE_H
#define SIMBAADGROUPSITEMEXISTRESPONSE_H

#include <TaoApiCpp/TaoResponse.h>


/**
 * @brief TOP RESPONSE API: 判断在一个推广计划中是否已经推广了一个商品
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class SimbaAdgroupsItemExistResponse : public TaoResponse
{
public:
 virtual ~SimbaAdgroupsItemExistResponse() { }

  bool getExist() const;
  void setExist (bool exist);
  virtual void parseNormalResponse();

 private:
/**
 * @brief true表示已经被推广，false表示没有被推广
 **/
  bool exist;

};

#endif
