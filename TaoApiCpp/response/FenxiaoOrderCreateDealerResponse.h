#ifndef FENXIAOORDERCREATEDEALERRESPONSE_H
#define FENXIAOORDERCREATEDEALERRESPONSE_H

#include <TaoApiCpp/TaoResponse.h>


/**
 * @brief TOP RESPONSE API: 分销商创建经销采购单.
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class FenxiaoOrderCreateDealerResponse : public TaoResponse
{
public:
 virtual ~FenxiaoOrderCreateDealerResponse() { }

  qlonglong getGetModule() const;
  void setGetModule (qlonglong getModule);
  virtual void parseNormalResponse();

 private:
/**
 * @brief 采购单号
 **/
  qlonglong getModule;

};

#endif
