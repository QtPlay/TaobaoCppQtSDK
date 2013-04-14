#ifndef INVENTORYAUTHORIZEINFO_H
#define INVENTORYAUTHORIZEINFO_H

#include <TaoApiCpp/TaoDomain.h>
#include <QString>


/**
 * @brief 授权信息数据结构
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class InventoryAuthorizeInfo : public TaoDomain
{

public:
 virtual ~InventoryAuthorizeInfo() { }

  QString getAuthorizeCode() const;
  void setAuthorizeCode (QString authorizeCode);
  qlonglong getChannelFlag() const;
  void setChannelFlag (qlonglong channelFlag);
  qlonglong getIndex() const;
  void setIndex (qlonglong index);
  qlonglong getInventoryType() const;
  void setInventoryType (qlonglong inventoryType);
  QString getNickName() const;
  void setNickName (QString nickName);
  QString getNickNameList() const;
  void setNickNameList (QString nickNameList);
  qlonglong getOccupyQuantity() const;
  void setOccupyQuantity (qlonglong occupyQuantity);
  qlonglong getQuantity() const;
  void setQuantity (qlonglong quantity);
  qlonglong getQuotaQuantity() const;
  void setQuotaQuantity (qlonglong quotaQuantity);
  QString getScItemCode() const;
  void setScItemCode (QString scItemCode);
  qlonglong getScItemId() const;
  void setScItemId (qlonglong scItemId);
  QString getStoreCode() const;
  void setStoreCode (QString storeCode);
  
  virtual void parseResponse();

private:
/**
 * @brief 本次授权的授权结果码
 **/
  QString authorizeCode;

/**
 * @brief 渠道标记 
1 – 16 淘宝保留 
17- 32 商家定义
 **/
  qlonglong channelFlag;

/**
 * @brief 批量请求时列表的序号
 **/
  qlonglong index;

/**
 * @brief 库存类型 0-10 淘宝保留 
11-20 商家自定义 
1：普通良品 
2：损坏 
3：冻结 
10：质押
 **/
  qlonglong inventoryType;

/**
 * @brief 独享时授权信息的用户昵称
 **/
  QString nickName;

/**
 * @brief 共享时授权对象的淘宝昵称列表，用;分割
 **/
  QString nickNameList;

/**
 * @brief 当前总共占用的库存数量
 **/
  qlonglong occupyQuantity;

/**
 * @brief 当前还剩下库存数量
 **/
  qlonglong quantity;

/**
 * @brief 授权给其他用户的配额库存数量
 **/
  qlonglong quotaQuantity;

/**
 * @brief 商品编码
 **/
  QString scItemCode;

/**
 * @brief 商品ID
 **/
  qlonglong scItemId;

/**
 * @brief 商家仓编号
 **/
  QString storeCode;

};

#endif  /* INVENTORYAUTHORIZEINFO_H */
